//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, TBFavoriteContentRecommendResult;
@protocol TBFavorContentModel;

@interface TBFavorContentListModel : TBJSONModel
{
    _Bool _hasMore;
    NSArray<TBFavorContentModel> *_contents;
    TBFavoriteContentRecommendResult *_tppResult;
}

@property(retain, nonatomic) TBFavoriteContentRecommendResult *tppResult; // @synthesize tppResult=_tppResult;
@property(retain, nonatomic) NSArray<TBFavorContentModel> *contents; // @synthesize contents=_contents;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;

@end

