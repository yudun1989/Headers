//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponent.h"

@class AliDetailSubInfoModel, NSMutableArray;

@interface AliDetailSubinfoComponent : AliDetailComponent
{
    long long totalCount;
    AliDetailSubInfoModel *_subinfoModel;
    NSMutableArray *_labelList;
}

+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(retain, nonatomic) NSMutableArray *labelList; // @synthesize labelList=_labelList;
@property(nonatomic) __weak AliDetailSubInfoModel *subinfoModel; // @synthesize subinfoModel=_subinfoModel;
- (void).cxx_destruct;
- (double)getLabelHeight;
- (void)setAttributeString:(id)arg1 inLabel:(id)arg2;
- (void)setSominfoContent:(id)arg1 xPos:(double)arg2 index:(long long)arg3 size:(struct CGSize)arg4;
- (id)getLabel:(double)arg1 size:(struct CGSize)arg2 index:(unsigned long long)arg3;
- (id)createTextLabel:(double)arg1 size:(struct CGSize)arg2 index:(unsigned long long)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setObject:(id)arg1;

@end

