//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBDWVideoCellModel.h"

@class TBIctSubModel, TBVideoFlowCommonModel, TBVideoFlowDescriptionModel, TBVideoFlowInteractivesModel, TBVideoFlowItemModel;

@interface TBVideoFlowInfoModel : TBDWVideoCellModel
{
    TBVideoFlowDescriptionModel *_descriptionModel;
    TBVideoFlowInteractivesModel *_interactivesModel;
    TBVideoFlowItemModel *_itemModel;
    TBVideoFlowCommonModel *_common;
    TBIctSubModel *_favor;
}

@property(retain, nonatomic) TBIctSubModel *favor; // @synthesize favor=_favor;
@property(retain, nonatomic) TBVideoFlowCommonModel *common; // @synthesize common=_common;
@property(retain, nonatomic) TBVideoFlowItemModel *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) TBVideoFlowInteractivesModel *interactivesModel; // @synthesize interactivesModel=_interactivesModel;
@property(retain, nonatomic) TBVideoFlowDescriptionModel *descriptionModel; // @synthesize descriptionModel=_descriptionModel;
- (void).cxx_destruct;
- (id)deepMutableCopyForArr:(id)arg1;
- (id)deepMutableCopy:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

@end

