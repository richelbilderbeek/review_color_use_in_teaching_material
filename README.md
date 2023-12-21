# review_color_use_in_teaching_material

A short literature search on using color in the images of academic teaching material

## Color usage advice

### Use color sparingly

Do use color sparingly:

> Use color sparingly, never more than is necessary for the task
>
> MacDonald, Lindsay W. "Using color effectively in computer graphics." IEEE Computer Graphics and Applications 19.4 (1999): 20-35.

### Use color

Do use color:

> 8.3 It has been proven that light colors such as yellow and blue elicit positive, lively and energetic feelings while dark colors such as black or grey elicit negative feelings of boredom, depression, and sadness. 
>
> Amarin, Nidal, and Amna Al-Saleh Al-Saleh. "The effect of color use in designing instructional aids on learners’ academic performance." Journal of e-Learning and Knowledge Society 16.2 (2020): 42-50.

Do use colors when presenting info:

> * Use color in conjunction with other visual variables for effective presentation.
> * Use strong colors sparingly on or between muted background tones.
> * Limit the number of colors in nominal coding to seven or fewer.
> * Use color transparency to show overlays of related structures.
>
> MacDonald, Lindsay W. "Using color effectively in computer graphics." IEEE Computer Graphics and Applications 19.4 (1999): 20-35.

Do use color:

> Although the measurable effects of color may be slight, colored materials are preferred and they are used almost universally
>
> Pett, Dennis, and Trudy Wilson. "Color research and its application to the design of instructional materials." Educational Technology Research and Development 44.3 (1996): 19-35.

Do use color:

> Use color to discriminate between elements of a visual.
> Use color to focus attention on relevant cues.
> Use colors to code and link logically related elements.
>
> Pett, Dennis, and Trudy Wilson. "Color research and its application to the design of instructional materials." Educational Technology Research and Development 44.3 (1996): 19-35.

## Gender differences

> Findings showed gender differences in color preferences; males preferred white, green, blue, and grey work environments and did not like yellow, orange, and purple spaces. Whereas females preferred green, red, and beige offices and did not like the grey and orange spaces. 
>
> Amarin, Nidal, and Amna Al-Saleh Al-Saleh. "The effect of color use in designing instructional aids on learners’ academic performance." Journal of e-Learning and Knowledge Society 16.2 (2020): 42-50.

## Age of learners

For children:

> Use highly saturated colors for materials intended for young children.
>
> Pett, Dennis, and Trudy Wilson. "Color research and its application to the design of instructional materials." Educational Technology Research and Development 44.3 (1996): 19-35.

> 8.2 Since color is an integral part of children’s positive perception of life, it is a good idea to use bright colors that stimulate them and motivate learning.
>
> Amarin, Nidal, and Amna Al-Saleh Al-Saleh. "The effect of color use in designing instructional aids on learners’ academic performance." Journal of e-Learning and Knowledge Society 16.2 (2020): 42-50.


## Answer from Bard

Here I uploaded a graph with colors and a graph that uses the mermaid default colors,
which had mostly greys.

```
Which of the images follows best the recommendations as found in the scientific literature on the use of color?
```

```
Determining which image follows best the recommendations as found in the scientific literature on the use of color requires a thorough evaluation of both images, considering the specific guidelines and recommendations for color usage in scientific visualizations. However, based on general principles of effective color usage in scientific diagrams, the colored image appears to adhere more closely to these principles.

Use of Color Contrast:

The colored image utilizes a clear color contrast between different components of the diagram, making it easy to distinguish between elements like nodes, data streams, and external connections. This contrast enhances the visual clarity and readability of the diagram.

Consistent Color Scheme:

The colored image employs a consistent color scheme throughout the diagram, avoiding abrupt color changes that could disrupt the visual flow. This consistency promotes a sense of organization and coherence in the representation.

Appropriate Color Assignment:

The colors used in the colored image seem to align with the meaning of each element they represent, enhancing the interpretation of the diagram. For instance, colors associated with data flow and connections appear appropriate for their roles in the diagram.

In contrast, the grey image, although clear and readable, lacks the visual appeal and emphasis provided by color. The absence of color contrast might make it slightly less intuitive for viewers to distinguish between components.

While both images effectively convey the information, the colored image appears to more closely align with the recommendations for effective color usage in scientific visualizations, making it a more visually appealing and interpretable representation of the data.
```

```
Thanks! Could you add references to the literature in your answer?
```

```
Sure, here are some references to the scientific literature on the use of color in scientific visualizations:

    "Using color in visualization: A survey" by Chen and Healey (2005) provides an overview of the different types of color scales and how to choose the most appropriate one for a particular visualization.

    "The use of color in the scientific visualization of acoustical phenomena" by Sparrow et al. (1996) discusses the specific guidelines for using color in acoustical visualizations.

    "The misuse of colour in science communication" by Ware and McGill (2012) describes common pitfalls in using color in scientific visualizations and provides advice on how to avoid them.

    "Visualizing Science: How Color Determines What We See" by Eos.org (2013) discusses the psychological effects of color on perception and how to use color effectively in scientific visualizations.

Overall, these references suggest that the colored image more closely follows the recommendations for effective color usage in scientific visualizations, as it uses a clear color contrast, a consistent color scheme, and appropriate color assignment.
```

## Example

My preference is:

 * Use `c` as subgraph background saturation, e.g. `#fcc` for red
 * Use `9` as node color saturation when the node needs not to be stressed, e.g. `#f99` for red
 * Use `0` as node color saturation when the node needs to be stressed, e.g. `#f00` for red

```
%% Direction is top->down
flowchart TD
    subgraph sub_red
        red_0
        red_9
        red_c
        red_f
        style red_0 fill:#f00,color:#000,stroke:#000
        style red_9 fill:#f99,color:#000,stroke:#000
        style red_c fill:#fcc,color:#000,stroke:#000
        style red_f fill:#fff,color:#000,stroke:#000
    end
    style sub_red fill:#fcc,color:#000,stroke:#fcc
    subgraph sub_yellow
        yellow_0
        yellow_9
        yellow_c
        yellow_f
        style yellow_0 fill:#ff0,color:#000,stroke:#000
        style yellow_9 fill:#ff9,color:#000,stroke:#000
        style yellow_c fill:#ffc,color:#000,stroke:#000
        style yellow_f fill:#fff,color:#000,stroke:#000
    end
    style sub_yellow fill:#ffc,color:#000,stroke:#ffc
    subgraph sub_green
        green_0
        green_9
        green_c
        green_f
        style green_0 fill:#0f0,color:#000,stroke:#000
        style green_9 fill:#9f9,color:#000,stroke:#000
        style green_c fill:#cfc,color:#000,stroke:#000
        style green_f fill:#fff,color:#000,stroke:#000
    end
    style sub_green fill:#cfc,color:#000,stroke:#cfc
    subgraph sub_cyan
        cyan_0
        cyan_9
        cyan_c
        cyan_f
        style cyan_0 fill:#0ff,color:#000,stroke:#000
        style cyan_9 fill:#9ff,color:#000,stroke:#000
        style cyan_c fill:#cff,color:#000,stroke:#000
        style cyan_f fill:#fff,color:#000,stroke:#000
    end
    style sub_cyan fill:#cff,color:#000,stroke:#cff
    subgraph sub_blue
        blue_0
        blue_9
        blue_c
        blue_f
        style blue_0 fill:#00f,color:#000,stroke:#000
        style blue_9 fill:#99f,color:#000,stroke:#000
        style blue_c fill:#ccf,color:#000,stroke:#000
        style blue_f fill:#fff,color:#000,stroke:#000
    end
    style sub_blue fill:#ccf,color:#000,stroke:#ccf
    subgraph sub_magenta
        magenta_0
        magenta_9
        magenta_c
        magenta_f
        style magenta_0 fill:#f0f,color:#000,stroke:#000
        style magenta_9 fill:#f9f,color:#000,stroke:#000
        style magenta_c fill:#fcf,color:#000,stroke:#000
        style magenta_f fill:#fff,color:#000,stroke:#000
    end
    style sub_magenta fill:#fcf,color:#000,stroke:#fcf
    subgraph sub_white
        white_0
        white_9
        white_c
        white_f
        style white_0 fill:#fff,color:#000,stroke:#000
        style white_9 fill:#fff,color:#000,stroke:#000
        style white_c fill:#fff,color:#000,stroke:#000
        style white_f fill:#fff,color:#000,stroke:#000
    end
    style sub_white fill:#fff,color:#000,stroke:#fff
    subgraph sub_grey
        grey_0
        grey_9
        grey_c
        grey_f
        style grey_0 fill:#000,color:#000,stroke:#000
        style grey_9 fill:#999,color:#000,stroke:#000
        style grey_c fill:#ccc,color:#000,stroke:#000
        style grey_f fill:#fff,color:#000,stroke:#000
    end
    style sub_grey fill:#ccc,color:#000,stroke:#ccc
    subgraph sub_black
        black_0
        black_9
        black_c
        black_f
        style black_0 fill:#000,color:#000,stroke:#000
        style black_9 fill:#000,color:#000,stroke:#000
        style black_c fill:#000,color:#000,stroke:#000
        style black_f fill:#000,color:#000,stroke:#000
    end
    style sub_black fill:#000,color:#000,stroke:#000

%% Invisible edges, to align the subgraphs vertically
    red_0 ~~~ yellow_0
    red_9 ~~~ yellow_9
    red_c ~~~ yellow_c
    red_f ~~~ yellow_f
    yellow_0 ~~~ green_0
    yellow_9 ~~~ green_9
    yellow_c ~~~ green_c
    yellow_f ~~~ green_f
    green_0 ~~~ cyan_0
    green_9 ~~~ cyan_9
    green_c ~~~ cyan_c
    green_f ~~~ cyan_f
    cyan_0 ~~~ blue_0
    cyan_9 ~~~ blue_9
    cyan_c ~~~ blue_c
    cyan_f ~~~ blue_f
    blue_0 ~~~ magenta_0
    blue_9 ~~~ magenta_9
    blue_c ~~~ magenta_c
    blue_f ~~~ magenta_f
    magenta_0 ~~~ white_0
    magenta_9 ~~~ white_9
    magenta_c ~~~ white_c
    magenta_f ~~~ white_f
    white_0 ~~~ grey_0
    white_9 ~~~ grey_9
    white_c ~~~ grey_c
    white_f ~~~ grey_f
    grey_0 ~~~ black_0
    grey_9 ~~~ black_9
    grey_c ~~~ black_c
    grey_f ~~~ black_f
```
