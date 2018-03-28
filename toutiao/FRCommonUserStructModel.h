//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class FRCommonUserInfoStructModel, FRCommonUserRelationStructModel, FRUserBlockedAndBlockingStructModel, FRUserRelationCountStructModel;
@protocol Optional;

@interface FRCommonUserStructModel : JSONModel
{
    FRCommonUserInfoStructModel *_info;
    FRCommonUserRelationStructModel<Optional> *_relation;
    FRUserRelationCountStructModel<Optional> *_relation_count;
    FRUserBlockedAndBlockingStructModel<Optional> *_block;
}

@property(retain, nonatomic) FRUserBlockedAndBlockingStructModel<Optional> *block; // @synthesize block=_block;
@property(retain, nonatomic) FRUserRelationCountStructModel<Optional> *relation_count; // @synthesize relation_count=_relation_count;
@property(retain, nonatomic) FRCommonUserRelationStructModel<Optional> *relation; // @synthesize relation=_relation;
@property(retain, nonatomic) FRCommonUserInfoStructModel *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

