## *Requires lib assimp to build* 
```
sudo apt install libassimp-dev
```

### Features

* WASD keyboard movement
* hold shift for mouse look
* zoom with mouse wheel
* x-key switches between forward rendering and deferred rendering
* z-key allows inspection of deferred rendering frame buffers, f-key to cycle through the buffers
* When in deferred rendering mode, hit c-key to turn on tile based deferred rendering
* When in tile-based deferred rendering, hit t-key to transpose tile boundaries over scene


### Youtube video

* Sorry for the sound quality! Tried a few mics and they were all terrible, the program is pretty taxing on my poor little laptop so the fan noise gets pretty loud

https://youtu.be/S-fF5R1jeBc


<img src="./part1/media/forward_rendering.png">
<img src="./part1/media/deferred_rendering.png">
<img src="./part1/media/tile_deferred_rendering.png">

* Name and partners name(At most teams of 2 folks total)
  * Team member 1: Martin Boros

* How many hours did it take you to complete this final project? About 30 hours
* Did you collaborate or share ideas with any other students/TAs/Professors? Talked about the project during office hours
* Did you use any external resources? Yes
  * Note it is fair to utilize some tutorials--cite them here. You **must** add your own personal touch however!
  * https://learnopengl.com/Advanced-Lighting/Deferred-Shading
  * https://software.intel.com/sites/default/files/m/d/4/1/d/8/lauritzen_deferred_shading_siggraph_2010.pdf
  * https://johanmedestrom.wordpress.com/2016/03/30/tiled-deferred-shading-in-opengl-using-compute-shaders/
  * (Optional) What was the most interesting part of the Final Assignment? How could the instructor improve the final project?
  I liked having a larger project where I could go back and re-implement everything from scratch, and also digging into something new more deeply. Figuring out the compute shader was a fun challenge,as there was not a lot of info available online, just some toy examples. Also the algorithms for tile based light culling available weren't great, so I had to think about how to do these on my own

### Rubric

<table>
  <tbody>
    <tr>
      <th>Points</th>
      <th align="center">Description</th>
    </tr>
    <tr>
      <td>(33.3%) Project Completion</td>
     <td align="left"><ul><li>Does the project compile and run.</li><li>Is it polished without any bugs (No weird visual artifacts).</li><li>Did you make a video?</li><li>Did you add a screenshot of your project to the repository?</li></ul></td>
    </tr>
    <tr>
      <td>(33.3%) Technical</td>
      <td align="left"><ul><li>Was the implementation of the project challenging?</li><li>Even if you followed a tutoral, it should not be trivial, and have some personal touch to it.</li><li>Did you have to organize/process a sufficient amount of data?</li><li>Was it clear you consulted some outside resources that go above and beyond the scope of this class</li></ul></td>
    </tr>
    <tr>
      <td>(33.4%) Creativity</td>
      <td align="left"><ul><li>How visually appealing is the scene?<ul><li>Note: There should be some 'wow' factor--instructors discretion is used here.</li></ul></li><li>How original is the project<ul><li>Again, did you enhance a tutorial and do something unique or just go by the book?</li></ul></li></ul></td>
    </tr>
  </tbody>
</table>
