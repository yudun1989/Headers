//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreCellBase.h"

@class TTRecommendUserCellView;

@interface TTRecommendUserCell : ExploreCellBase
{
    TTRecommendUserCellView *_recommendUserCellView;
}

+ (Class)cellViewClass;
@property(retain, nonatomic) TTRecommendUserCellView *recommendUserCellView; // @synthesize recommendUserCellView=_recommendUserCellView;
- (void).cxx_destruct;
- (void)didEndDisplaying;
- (void)willDisplay;
- (id)createCellView;

@end

