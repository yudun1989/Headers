//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSMutableArray, QQDynamicSearchDiscoveryHeaderModel;

@interface QQDynamicSearchDiscoveryModel : QQModel
{
    unsigned long long _discoveryType;
    _Bool _hasHeader;
    QQDynamicSearchDiscoveryHeaderModel *_headerModel;
    _Bool _isHideHeaderOfSection;
    NSMutableArray *_subItemsArray;
    int _xo;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) unsigned long long discoveryType; // @dynamic discoveryType;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(retain, nonatomic) QQDynamicSearchDiscoveryHeaderModel *headerModel; // @dynamic headerModel;
@property(nonatomic) _Bool isHideHeaderOfSection; // @dynamic isHideHeaderOfSection;
@property(retain, nonatomic) NSMutableArray *subItemsArray; // @dynamic subItemsArray;

@end

