//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GMSQuadTreeNode : NSObject
{
    NSMutableDictionary *_zoomTables;
    GMSQuadTreeNode *_children[4];
}

- (void).cxx_destruct;
- (void)addZoomTable:(id)arg1 finalX:(int)arg2 finalY:(int)arg3 zoomOffset:(int)arg4 tileType:(id)arg5;
- (_Bool)isEmpty;
- (long long)childIndexForFinalX:(int)arg1 finalY:(int)arg2 zoomOffset:(int)arg3;
- (id)childAtIndex:(unsigned long long)arg1;
- (id)zoomTableForTileType:(id)arg1;
- (id)description;
- (id)stringValue;

@end

