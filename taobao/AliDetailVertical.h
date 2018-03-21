//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliDetailAskAll, AliDetailCNQuality, AliDetailDisableModel, AliDetailFreshFood, AliDetailGlobalSellModel, AliDetailHotItem, AliDetailInterModel, AliDetailIsvCustom, AliDetailJhsModel, AliDetailJyjModel, AliDetailLadyGo, AliDetailMeiLiHui, AliDetailMemberShop, AliDetailPackageModel, AliDetailPinTuanModel, AliDetailPinTuanNewModel, AliDetailPresaleModel, AliDetailQiangGouModel, AliDetailSellOut, AliDetailShopCardModel, AliDetailSuperMarketModel, AliDetailZhiZuData, NSDictionary;

@interface AliDetailVertical : TBJSONModel
{
    AliDetailSuperMarketModel *_supermarket;
    AliDetailInterModel *_inter;
    AliDetailPresaleModel *_presale;
    AliDetailJhsModel *_jhs;
    AliDetailJyjModel *_jyj;
    AliDetailHotItem *_hotItem;
    AliDetailDisableModel *_disabledItem;
    AliDetailCNQuality *_chinaQuality;
    AliDetailQiangGouModel *_qianggou;
    AliDetailPackageModel *_ctPackageTrade;
    AliDetailAskAll *_askAll;
    AliDetailSellOut *_sellOut;
    AliDetailLadyGo *_ladyGo;
    AliDetailMeiLiHui *_meiLiHui;
    AliDetailFreshFood *_freshFood;
    AliDetailMemberShop *_memberShop;
    AliDetailIsvCustom *_isvCustom;
    AliDetailZhiZuData *_zhiZuData;
    AliDetailPinTuanModel *_pinTuan;
    AliDetailPinTuanNewModel *_pintuan;
    AliDetailGlobalSellModel *_globalSell;
    AliDetailShopCardModel *_shopCard;
    NSDictionary *_wangPromptMsg;
}

@property(retain, nonatomic) NSDictionary *wangPromptMsg; // @synthesize wangPromptMsg=_wangPromptMsg;
@property(retain, nonatomic) AliDetailShopCardModel *shopCard; // @synthesize shopCard=_shopCard;
@property(retain, nonatomic) AliDetailGlobalSellModel *globalSell; // @synthesize globalSell=_globalSell;
@property(retain, nonatomic) AliDetailPinTuanNewModel *pintuan; // @synthesize pintuan=_pintuan;
@property(retain, nonatomic) AliDetailPinTuanModel *pinTuan; // @synthesize pinTuan=_pinTuan;
@property(retain, nonatomic) AliDetailZhiZuData *zhiZuData; // @synthesize zhiZuData=_zhiZuData;
@property(retain, nonatomic) AliDetailIsvCustom *isvCustom; // @synthesize isvCustom=_isvCustom;
@property(retain, nonatomic) AliDetailMemberShop *memberShop; // @synthesize memberShop=_memberShop;
@property(retain, nonatomic) AliDetailFreshFood *freshFood; // @synthesize freshFood=_freshFood;
@property(retain, nonatomic) AliDetailMeiLiHui *meiLiHui; // @synthesize meiLiHui=_meiLiHui;
@property(retain, nonatomic) AliDetailLadyGo *ladyGo; // @synthesize ladyGo=_ladyGo;
@property(retain, nonatomic) AliDetailSellOut *sellOut; // @synthesize sellOut=_sellOut;
@property(retain, nonatomic) AliDetailAskAll *askAll; // @synthesize askAll=_askAll;
@property(retain, nonatomic) AliDetailPackageModel *ctPackageTrade; // @synthesize ctPackageTrade=_ctPackageTrade;
@property(retain, nonatomic) AliDetailQiangGouModel *qianggou; // @synthesize qianggou=_qianggou;
@property(retain, nonatomic) AliDetailCNQuality *chinaQuality; // @synthesize chinaQuality=_chinaQuality;
@property(retain, nonatomic) AliDetailDisableModel *disabledItem; // @synthesize disabledItem=_disabledItem;
@property(retain, nonatomic) AliDetailHotItem *hotItem; // @synthesize hotItem=_hotItem;
@property(retain, nonatomic) AliDetailJyjModel *jyj; // @synthesize jyj=_jyj;
@property(retain, nonatomic) AliDetailJhsModel *jhs; // @synthesize jhs=_jhs;
@property(retain, nonatomic) AliDetailPresaleModel *presale; // @synthesize presale=_presale;
@property(retain, nonatomic) AliDetailInterModel *inter; // @synthesize inter=_inter;
@property(retain, nonatomic) AliDetailSuperMarketModel *supermarket; // @synthesize supermarket=_supermarket;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

