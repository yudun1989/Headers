//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APAddressBookBaseRoutine.h"

@class APContactBuilder;

@interface APAddressBookContactsRoutine : APAddressBookBaseRoutine
{
    APContactBuilder *_builder;
}

@property(retain, nonatomic) APContactBuilder *builder; // @synthesize builder=_builder;
- (void).cxx_destruct;
- (id)imageWithRecordID:(id)arg1;
- (id)contactByRecordID:(id)arg1 withFieldMask:(unsigned long long)arg2;
- (id)allContactsWithContactFieldMask:(unsigned long long)arg1;
- (id)initWithAddressBookRefWrapper:(id)arg1;

@end

