//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TightTableViewCellModel.h>

@class NSMutableArray, NSString;

@interface NearbyTribeCellModel : TightTableViewCellModel
{
    NSMutableArray *_tribeList;
    NSString *_barsUrl;
    int _summaryType;
    int _xo;
}

- (void)dealloc;
- (double)heightForRow;

// Remaining properties
@property(copy, nonatomic) NSString *barsUrl; // @dynamic barsUrl;
@property(nonatomic) int summaryType; // @dynamic summaryType;
@property(retain, nonatomic) NSMutableArray *tribeList; // @dynamic tribeList;

@end

