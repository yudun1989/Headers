//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreArticleCellView.h"

@class TTRNView;

@interface ExploreArticleTitleRightPicCellView : ExploreArticleCellView
{
    TTRNView *_rnview;
}

+ (double)heightForData:(id)arg1 cellWidth:(double)arg2 listType:(unsigned long long)arg3;
+ (struct CGSize)picSizeWithCellWidth:(double)arg1;
@property(retain, nonatomic) TTRNView *rnview; // @synthesize rnview=_rnview;
- (void).cxx_destruct;
- (unsigned long long)cellSubStyle;
- (unsigned long long)cellStyle;
- (_Bool)titleAndSourceHeightLargerThanPicH;
- (double)titleAndSourceHeight;
- (void)refreshUI;
- (void)refreshWithData:(id)arg1;

@end

