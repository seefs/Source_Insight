def painting(): #绘制人物亲密度图
    G = nx.Graph()  # 绘制个人物之间的亲密关系
    people_num = 0
    edge_num = 0
    for i in relationships:
        G.add_node(i)
        people_num += 1
        for n in relationships[i]:
            G.add_edge(i, n, weight=relationships[i][n])
            edge_num += 1
    print(people_num, edge_num)
    nx.draw(G, with_labels=True, edge_color='b', cmap=plt.cm.Oranges, pos=nx.spring_layout(G),
            node_color=range(people_num), node_size=900, width=1, font_size=8)
    plt.show()
