//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBARDetailGoBuyInfo, TBARDetailMarkModel, TBARDetailShareConfigModel;

@interface TBARDetailModel : TBJSONModel
{
    int _iosBinSize;
    int _binSize;
    float _itemL;
    float _itemW;
    float _itemH;
    float _modelRatio;
    NSString *_iosBinUrl;
    NSString *_iosMd5;
    NSString *_binUrl;
    NSString *_md5;
    TBARDetailMarkModel *_mark;
    TBARDetailShareConfigModel *_share;
    TBARDetailGoBuyInfo *_goBuyInfo;
}

@property(retain, nonatomic) TBARDetailGoBuyInfo *goBuyInfo; // @synthesize goBuyInfo=_goBuyInfo;
@property(retain, nonatomic) TBARDetailShareConfigModel *share; // @synthesize share=_share;
@property(retain, nonatomic) TBARDetailMarkModel *mark; // @synthesize mark=_mark;
@property(nonatomic) float modelRatio; // @synthesize modelRatio=_modelRatio;
@property(nonatomic) float itemH; // @synthesize itemH=_itemH;
@property(nonatomic) float itemW; // @synthesize itemW=_itemW;
@property(nonatomic) float itemL; // @synthesize itemL=_itemL;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) int binSize; // @synthesize binSize=_binSize;
@property(copy, nonatomic) NSString *binUrl; // @synthesize binUrl=_binUrl;
@property(copy, nonatomic) NSString *iosMd5; // @synthesize iosMd5=_iosMd5;
@property(nonatomic) int iosBinSize; // @synthesize iosBinSize=_iosBinSize;
@property(copy, nonatomic) NSString *iosBinUrl; // @synthesize iosBinUrl=_iosBinUrl;
- (void).cxx_destruct;

@end

