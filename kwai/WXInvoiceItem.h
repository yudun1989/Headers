//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WXInvoiceItem : NSObject
{
    unsigned int _cardState;
    NSString *_cardId;
    NSString *_extMsg;
    NSString *_encryptCode;
    NSString *_appID;
}

@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSString *encryptCode; // @synthesize encryptCode=_encryptCode;
@property(nonatomic) unsigned int cardState; // @synthesize cardState=_cardState;
@property(retain, nonatomic) NSString *extMsg; // @synthesize extMsg=_extMsg;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;

@end

