//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreCellBase.h"

#import "TTAdAnimationCell-Protocol.h"

@class ExploreArticleTitleRightPicCellView;

@interface ExploreArticleTitleRightPicCell : ExploreCellBase <TTAdAnimationCell>
{
    ExploreArticleTitleRightPicCellView *_rightPicCellView;
}

+ (Class)cellViewClass;
@property(retain, nonatomic) ExploreArticleTitleRightPicCellView *rightPicCellView; // @synthesize rightPicCellView=_rightPicCellView;
- (void).cxx_destruct;
- (id)createCellView;
- (id)animationContextInfo:(id)arg1;

@end

