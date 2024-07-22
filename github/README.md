# Introduction
- Git is a distributed version control system that tracks versions of files.
-  GitHub is a cloud-based platform where you can store, share, and work together with others to write code.
- GitLab is the most comprehensive AI-powered DevSecOps Platform.
- .md files uses Markdown language.[^1][^5]
- .md files also uses HTML language to use elements.

# Basics
- Create account and sign in
- Create new git repository
- Clone the repository
	```bash
	git clone repo_url
	```
- Add changes made in the repository
	```bash
	git add file_name
	```
	or
	```bash
	git add .
	```
- Check status
	```bash
	git status
	```
- Commit changes
	```bash
	git commit -m 'comment'
	```
- Push repository using token as password 
	```bash
	git push
	```

>Note : 
>- A token must be generated before `git push` and that token will never be visible again (store the token safely forever)
>- To tell Git not to track any files by removing it from the index
>	```bash
>	git rm -r --cached .
>	```

# Headings 
- Headings are used to create hierarchy level
- Heading level from 1 to 6 '#'
- Syntax :
	```md
	# Heading_title
	```

# list
- Used to create list in hierarchy
- Unordered list
	```md
	- list
	```
	or
	```md
	* list 
	```
- Ordered list
	```md
	1. list
	```

# Referencing References / Footnotes
- To Link [^2]
- To Text [^3] 
	```md
	[^reference_number]
	```

# Hyperlink
- To url or local_media like [Google](https://google.com)
- Synatax
	```md
	[Text](url)
	```
- To local file [[test_file]]
	```md
	[[path/test_file]]
	```
- To web page https://google.com
	```md
	url
	```


# Embedded objects [^9][^10]
* Embedding Heading [Basics of Github](#Basics)
	```md
	[Text](#Heading_title)
	```
- Embedded text
	![[./data/test_file.md]]
	```md
	![[path/test_file]]
	```
- Embedded media (audio, image, video, URL, file etc.)
	```md
	![[alt text](alt media)](file_path/media_file)
	```
	or
	```md
	![[alt text](alt media)](url/media_file)
	```
- Embedded media (html) uses element to enable media features.
	```html
	<div style="position: relative; width: 100%; padding-bottom: 50%">
	<iframe src="url" 
	        title="title" frameborder="0" allowfullscreen
	        allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" 
	        style="position: absolute; width: 100%; height: 100%;">
	</iframe>
	</div>
	```
	 or
	```html
	<iframe src="url" style="width:100%; height:500px;" ></iframe>
	```
 - Example of embedded image 
	 [![Cannot load this picture!](./data/test.png)](https://upload.wikimedia.org/wikipedia/commons/8/8f/Orange_lambda.svg)
 - Example of embedded video 
	 [![Rick roll video](https://i.ytimg.com/vi_webp/dQw4w9WgXcQ/maxresdefault.webp)](https://www.youtube.com/watch?v=dQw4w9WgXcQ)
- Example of Embedded video (html)
	<div style="position: relative; width: 100%; padding-bottom: 50%">
	<iframe src="https://www.youtube.com/watch?v=dQw4w9WgXcQ" 
	        title="Getting Rick Rolled" frameborder="0" allowfullscreen
	        allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" 
	        style="position: absolute; width: 100%; height: 100%;">
	</iframe>
	</div>
 - Example of embedded page (html)
	<iframe src="https://www.markdownguide.org/basic-syntax/" style="width:100%; height:500px;" ></iframe>

# Quoting
- Text `Here is quoted text`
	```md
	 `Text`
	 ```
- Quoted text in note

	>Here is Quoted text 

	```md
	> Note:
	> Write note here.
	```
- Quoting code
	```python
	print("Hello, World!")
	exit(0)
	```
	
	` ```code_language
	new_line
	code_here
	new_line
	``` `


# Text formatting
- ==Highlight==
	```md
	==text==
	```
- **Bold** or __Bold 2__
	```md
	**text**
	```
	or 
	```md
	__text__
	```
- *Italic* or _Italic 2_
	```md
	*text*
	```
	or
	```md
	_text_
	```
- ~~Strike through~~
	```md
	~~text~~
	```
- log<sub>e</sub>(e<sup>2</sup>)=2
	```md
	text
	<sub>subscript_text</sub>
	<sup>superscript_text</sup>
	```

# Horizontal Ruler
```md
---
```

---

# Check boxes
- [ ] Unchecked box
	```md
	- [ ] Text
	```
- [x] Checked box
	```md
	- [x] Text
	```

# Mermaid Graph [^4]
```mermaid
graph TD
    A[START] -->|Writing| B(Psuedo code)
    B -->|Drawing|C(Flowchart)
    C --> |Analyzing|D{"Is Flowchart\ncorrect?"}
    D -->|Yes| E(Write <br> Code)
    D -->|No|A
    
    E -->|"Execting \n code"| F{"Is output <br> as expected"}
    F --> |Yes|G[STOP]
    F -->|NO| C
```
# GeoJSON map
> Note : Uses currently uses `[longitude,latitude]` system
```geojson
{
  "type": "FeatureCollection",
  "features": [
    {
      "type": "Feature",
      "id": 1,
      "properties": {
        "ID": 0
      },
      "geometry": {
        "type": "Polygon",
        "coordinates": [
          [
			[73.705819 ,18.589174 ],
			[73.705636 ,18.589121 ],
			[73.705655 ,18.589033 ],
			[73.705516 ,18.588992 ],
			[73.705538 ,18.588916 ],
			[73.705423 ,18.588885 ],
			[73.705495 ,18.588640 ],
			[73.705930 ,18.588758 ],
			[73.705819 ,18.589174 ]
          ]
        ]
      }
    }
  ]
}
````

# TopoJSON map
```topojson
{
  "type": "Topology",
  "transform": {
    "scale": [0.0005000500050005, 0.00010001000100010001],
    "translate": [100, 0]
  },
  "objects": {
    "example": {
      "type": "GeometryCollection",
      "geometries": [
        {
          "type": "Point",
          "properties": {"prop0": "value0"},
          "coordinates": [4000, 5000]
        },
        {
          "type": "LineString",
          "properties": {"prop0": "value0", "prop1": 0},
          "arcs": [0]
        },
        {
          "type": "Polygon",
          "properties": {"prop0": "value0",
            "prop1": {"this": "that"}
          },
          "arcs": [[1]]
        }
      ]
    }
  },
  "arcs": [[[4000, 0], [1999, 9999], [2000, -9999], [2000, 9999]],[[0, 0], [0, 9999], [2000, 0], [0, -9999], [-2000, 0]]]
}
```

# 3D model
```stl
solid cube_corner
  facet normal 0.0 -1.0 0.0
    outer loop
      vertex 0.0 0.0 0.0
      vertex 1.0 0.0 0.0
      vertex 0.0 0.0 1.0
    endloop
  endfacet
  facet normal 0.0 0.0 -1.0
    outer loop
      vertex 0.0 0.0 0.0
      vertex 0.0 1.0 0.0
      vertex 1.0 0.0 0.0
    endloop
  endfacet
  facet normal -1.0 0.0 0.0
    outer loop
      vertex 0.0 0.0 0.0
      vertex 0.0 0.0 1.0
      vertex 0.0 1.0 0.0
    endloop
  endfacet
  facet normal 0.577 0.577 0.577
    outer loop
      vertex 1.0 0.0 0.0
      vertex 0.0 1.0 0.0
      vertex 0.0 0.0 1.0
    endloop
  endfacet
endsolid
```

# Table

| Sr no. |                     Data | Data 2       |
| :----: | -----------------------: | :----------- |
|   1    |            Right aligned | Left aligned |
|   2    | Special character ( \| ) |              |

# Picture
<picture>
  <source media="(prefers-color-scheme: dark)" srcset="https://user-images.githubusercontent.com/25423296/163456776-7f95b81a-f1ed-45f7-b7ab-8fa810d529fa.png">
  <source media="(prefers-color-scheme: light)" srcset="https://user-images.githubusercontent.com/25423296/163456779-a8556205-d0a5-45e2-ac17-42d089e3c3f8.png">
  <img alt="Shows an illustrated sun in light mode and a moon with stars in dark mode." src="https://user-images.githubusercontent.com/25423296/163456779-a8556205-d0a5-45e2-ac17-42d089e3c3f8.png">
</picture>

# References
- Syntax : ```[^1]:Reference here```

[^1]:https://docs.github.com/en/get-started
[^2]: https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax
[^3]: Reference text
[^4]:https://mermaid.live/edit
[^5]:https://www.markdownguide.org/basic-syntax/
[^9]:https://tiiny.host/blog/images-in-markdown/
[^10]:https://markdownmonster.west-wind.com/docs/_4xs10gaui.htm