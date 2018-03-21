//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSArray, NSString;

@interface WCPayTransBankItem : MMObject
{
    unsigned int _m_uiBankFlag;
    unsigned int _m_uiChargeFee;
    NSString *_m_nsBankCardType;
    NSString *_m_nsBankName;
    NSString *_m_nsBankImageUrl;
    NSString *_m_nsMaintenanceText;
    NSString *_m_nsMaintenanceColor;
    NSString *_m_nsMaintenanceAlertTitle;
    NSString *_m_nsPinYin;
    NSArray *_m_enterTimeList;
}

@property(retain, nonatomic) NSArray *m_enterTimeList; // @synthesize m_enterTimeList=_m_enterTimeList;
@property(retain, nonatomic) NSString *m_nsPinYin; // @synthesize m_nsPinYin=_m_nsPinYin;
@property(retain, nonatomic) NSString *m_nsMaintenanceAlertTitle; // @synthesize m_nsMaintenanceAlertTitle=_m_nsMaintenanceAlertTitle;
@property(retain, nonatomic) NSString *m_nsMaintenanceColor; // @synthesize m_nsMaintenanceColor=_m_nsMaintenanceColor;
@property(retain, nonatomic) NSString *m_nsMaintenanceText; // @synthesize m_nsMaintenanceText=_m_nsMaintenanceText;
@property(nonatomic) unsigned int m_uiChargeFee; // @synthesize m_uiChargeFee=_m_uiChargeFee;
@property(nonatomic) unsigned int m_uiBankFlag; // @synthesize m_uiBankFlag=_m_uiBankFlag;
@property(retain, nonatomic) NSString *m_nsBankImageUrl; // @synthesize m_nsBankImageUrl=_m_nsBankImageUrl;
@property(retain, nonatomic) NSString *m_nsBankName; // @synthesize m_nsBankName=_m_nsBankName;
@property(retain, nonatomic) NSString *m_nsBankCardType; // @synthesize m_nsBankCardType=_m_nsBankCardType;
- (void).cxx_destruct;
- (_Bool)isUnderMaintenance;
- (id)initWithBankCardElem:(id)arg1;

@end

