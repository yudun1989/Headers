//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXTrueLoveBaseModule.h"

@class NSMutableArray, UIButton, UIImageView, UILabel;

@interface YXTrueLoveTaskStateModule : YXTrueLoveBaseModule
{
    UILabel *titleLabel;
    UIImageView *medalImageView;
    NSMutableArray *itemArray;
    UIButton *rankingButton;
    CDUnknownBlockType _trueloveLevelBlock;
    CDUnknownBlockType _medalDetailBlock;
    CDUnknownBlockType _rankingTapBlock;
}

@property(copy, nonatomic) CDUnknownBlockType rankingTapBlock; // @synthesize rankingTapBlock=_rankingTapBlock;
@property(copy, nonatomic) CDUnknownBlockType medalDetailBlock; // @synthesize medalDetailBlock=_medalDetailBlock;
@property(copy, nonatomic) CDUnknownBlockType trueloveLevelBlock; // @synthesize trueloveLevelBlock=_trueloveLevelBlock;
- (void).cxx_destruct;
- (void)rankingTap;
- (void)medalDetail;
- (void)trueloveLevel;
- (double)widthWithLabel:(id)arg1;
- (double)height;
- (void)setData:(id)arg1;
- (id)initWithWidth:(double)arg1 type:(long long)arg2 container:(id)arg3;

@end

