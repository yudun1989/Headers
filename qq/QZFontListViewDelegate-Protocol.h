//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class ETQZFont, QZFontListView, QZYellowDiamondH5FloatingPayViewController;

@protocol QZFontListViewDelegate <NSObject>

@optional
- (void)selectBigFont:(_Bool)arg1;
- (void)resignTextView;
- (void)showFontRedDot:(_Bool)arg1;
- (void)fontListView:(QZFontListView *)arg1 openPayVC:(QZYellowDiamondH5FloatingPayViewController *)arg2 hasQual:(_Bool)arg3;
- (void)fontListViewDidSelected:(ETQZFont *)arg1 withTap:(_Bool)arg2;
@end

