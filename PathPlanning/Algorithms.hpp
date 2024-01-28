# ifndef MRL_BEHAVIOR_MODULES_PATHPLANNING_ALGORITHMS
    /**
     * @file Algorithms.hpp\
     * @brief Behavior Modules for Path Planning Algorithms
     * @date 2024-01-28
     */
    # define MRL_BEHAVIOR_MODULES_PATHPLANNING_ALGORITHMS
    // - Include Astar Algorithm
    # ifndef ASTAR_ALGORITHM
        # include "AStar/AStar.hpp"
    # endif // ASTAR_ALGORITHM
    // - Include BFS Algorithm
    # ifndef BFS_ALGORITHM
        # include "BFS/BFS.hpp"
    # endif // BFS_ALGORITHM
    // - Include DFS Algorithm
    # ifndef DFS_ALGORITHM
        # include "DFS/DFS.hpp"
    # endif // DFS_ALGORITHM
    /**
     * @brief Path Planning Class Definition
     */
    class PathPlanning {
        public:
            //-- A* Object
            AStar astar;
            //-- BFS Object
            BFS bfs;
            //-- DFS Object
            DFS dfs;
            /**
             * @brief Construct a new Path Planning object
             */
            PathPlanning();
    };
# endif // MRL_BEHAVIOR_MODULES_PATHPLANNING_ALGORITHMS