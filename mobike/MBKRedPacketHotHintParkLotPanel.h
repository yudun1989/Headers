//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MBKRedPackageStopPointPanelView, MBKRedPacketHotHintTitleView, MBKRedPoketMPLInfo;

@interface MBKRedPacketHotHintParkLotPanel : UIView
{
    MBKRedPacketHotHintTitleView *_hotHintTitleView;
    MBKRedPackageStopPointPanelView *_hotHintDetailsView;
    MBKRedPoketMPLInfo *_mplInfo;
}

@property(retain, nonatomic) MBKRedPoketMPLInfo *mplInfo; // @synthesize mplInfo=_mplInfo;
@property(retain, nonatomic) MBKRedPackageStopPointPanelView *hotHintDetailsView; // @synthesize hotHintDetailsView=_hotHintDetailsView;
@property(retain, nonatomic) MBKRedPacketHotHintTitleView *hotHintTitleView; // @synthesize hotHintTitleView=_hotHintTitleView;
- (void).cxx_destruct;
- (void)buildUI;
- (id)init;

@end

