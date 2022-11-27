import React from "react";
import { motion } from "framer-motion";
import "./Home.css";
import X from "../../assets/cutout4.png";
import bg from "../../assets/2019-1.jpg";
import X2 from "../../assets/Group 1.png";

const Home = () => {
  return (
    <motion.div className="bg-black h-[100vh] flex justify-center items-center">
      <motion.div
        animate={{ width: "100%" }}
        initial={{ width: 0 }}
        transition={{ duration: 2 }}
        className="bg-white h-[20px] rotate-45   "
      ></motion.div>
      <motion.h1 className="text-white text-3xl weight-700">TEDXMEC</motion.h1>
      <motion.div
        animate={{ width: "100%" }}
        initial={{ width: 0 }}
        transition={{ duration: 2 }}
        className="bg-white h-[20px] rotate-[135deg]  "
      ></motion.div>
    </motion.div>
  );
};

export default Home;
