//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSString, QQLockDictionary;

@interface QQBaseTableView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    QQLockDictionary *_cellDict;
    _Bool _enableReload;
    _Bool _reloadFail;
    _Bool _reloadDataFail;
    double _lastReloadTime;
    int _xo;
}

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)preloadCellForIndexPath:(id)arg1;
- (void)preloadCellNearByIndexPath:(id)arg1;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)currentReloadData;
- (void)reloadData;
@property(nonatomic) _Bool enableReload; // @dynamic enableReload;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 createCellForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)initial;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double lastReloadTime; // @dynamic lastReloadTime;
@property(nonatomic) _Bool reloadDataFail; // @dynamic reloadDataFail;
@property(nonatomic) _Bool reloadFail; // @dynamic reloadFail;
@property(readonly) Class superclass;

@end

