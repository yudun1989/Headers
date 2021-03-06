//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTableViewCellBaseConfig;

@interface WCTableViewCellManager : NSObject
{
    WCTableViewCellBaseConfig *_cellConfig;
}

+ (id)customCellForMakeSel:(SEL)arg1 makeTarget:(id)arg2 actionSel:(SEL)arg3 actionTarget:(id)arg4 userInfo:(id)arg5;
+ (id)loadingCell;
+ (id)doubleLineCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 detail:(id)arg4;
+ (id)ActivityIndicatorCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3;
+ (id)detailDisclosureButtonCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3;
+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 on:(_Bool)arg4;
+ (id)leftBadgeCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 title:(id)arg4 badge:(id)arg5 WithDisclosureIndicator:(_Bool)arg6;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 leftImage:(id)arg3 badge:(id)arg4 title:(id)arg5 rightValue:(id)arg6 rightImage:(id)arg7 WithDisclosureIndicator:(_Bool)arg8 withRightRedDot:(_Bool)arg9 selected:(_Bool)arg10;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 rightImage:(id)arg5 WithDisclosureIndicator:(_Bool)arg6 withRightRedDot:(_Bool)arg7;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 rightImage:(id)arg5 WithDisclosureIndicator:(_Bool)arg6;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 WithDisclosureIndicator:(_Bool)arg5;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3;
+ (id)normalCellForTitle:(id)arg1;
@property(retain, nonatomic) WCTableViewCellBaseConfig *cellConfig; // @synthesize cellConfig=_cellConfig;
- (void).cxx_destruct;
- (long long)systemSelectionStyle:(unsigned long long)arg1;
- (void)didBeClickedAt:(id)arg1;
- (double)cellHeightFor:(id)arg1;
- (void)configureCell:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)init;

@end

