//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface QQGroupShareLinkListManager : NSObject
{
    NSMutableArray *_senderArray;
    NSMutableArray *_appidArray;
    NSMutableArray *_domainArray;
    int _dataSouce;
    _Bool _disabled;
}

+ (id)getGSListFilePath;
+ (id)shareInstance;
@property(readonly, nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
- (_Bool)gsListContainKey:(id)arg1 type:(id)arg2;
- (void)updateGroupShreLinkList:(id)arg1 version:(unsigned int)arg2;
- (_Bool)loadListData:(id)arg1 from:(int)arg2;
- (void)doSaveGroupShareListAction:(id)arg1;
- (void)saveGroupShareList:(id)arg1;
- (void)loadGroupShareList;
- (void)dealloc;
- (id)init;

@end

