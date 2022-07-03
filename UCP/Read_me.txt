/* CS204 - Project
Dated - 12 May 2022
Computer Architecture and Organization
    Submitted By -
    Abhay Shukralia (2020csb1061)
    Raghav Patidar (2020csb1115)
    Rohan Khanna (2020csb1117)
    Vibhav Goriya (2020csb1139)
    Vijay Dwivedi (2020csb1140) */

For implememtation of UCP, we created two files : 
    1. ucp.llc_repl in replacement folder
        We created a new replacement file for implementing UCP (ucp.llc_repl)
        Below are the  class and functions which we have implemented in this ucp file-

        ** llc_initialise_replacement
            ->We have initialised lru value of all the blocks to zero and also we have initialise the tag,lru value and valid status of
            ATD using random 32 sets from the memory separately for core1 and core 2.
    
        ** llc_find_victim
        -> we have taken two counters cnt1 and cnt2  to check the no of blocks of core1 and cor2 present in the llc. 
        Based on the counter values and and cpu request we have found the victim block which we have to remove for the incoming block. 
        After finding the victim block ,we have updated the parameters of ATD.

        ** llc_update_replacement_state
            -> In case of hit if the tag matches with the  requested block address then we updated the lru value of that block equal to
            zero and incremented the lru value for all the other blocks.Also the counter values of blocks in ATD gets updated based on
            the number of hits. Now after every 5 million cycles we find the  maximum no of hits in all possible partitions and based 
            on this value we have updated the partition values.  

    2.  atd.h in inc folder
        Declared class ATD to add dynamic set sampling.
        Used this class in ucp.llc_repl to declare ATD arrays for both core1 and core2.


HOW TO RUN FILE ???
    For building the UCP file :  ./build_champsim.sh bimodal no no no no ucp 2
    To run  the UCP file :   ./run_2core.sh bimodal-no-no-no-no-ucp-2core 1 10 0 GemsFDTD_716B.trace.xz gobmk_135B.trace.xz

// We ran code on traces given in above terminal code