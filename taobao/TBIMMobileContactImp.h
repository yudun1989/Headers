//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBIMMobileContact-Protocol.h"

@class NSString, TBAMPMobileContact;

@interface TBIMMobileContactImp : NSObject <TBIMMobileContact>
{
    TBAMPMobileContact *_data;
}

@property(retain, nonatomic) TBAMPMobileContact *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)lastModifiedDate;
- (long long)secNum;
- (id)pinyin;
- (id)phone;
- (id)name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

