//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray;
@protocol CNLogisticOrderListItem, CNLogisticPackageListItem;

@interface CNLogisticResultData : TBJSONModel
{
    _Bool _partOutPackage;
    NSArray<CNLogisticOrderListItem> *_orderList;
    NSArray<CNLogisticPackageListItem> *_packageItemList;
}

@property(nonatomic) _Bool partOutPackage; // @synthesize partOutPackage=_partOutPackage;
@property(retain, nonatomic) NSArray<CNLogisticPackageListItem> *packageItemList; // @synthesize packageItemList=_packageItemList;
@property(retain, nonatomic) NSArray<CNLogisticOrderListItem> *orderList; // @synthesize orderList=_orderList;
- (void).cxx_destruct;

@end

