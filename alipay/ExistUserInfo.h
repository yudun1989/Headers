//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface ExistUserInfo : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasAccountType;
    _Bool _hasTaobaoNick;
    _Bool _hasRealNamed;
    _Bool _hasIdCard;
    _Bool _hasCertNo;
    _Bool _hasAvatar;
    _Bool _hasRealName;
    _Bool _hasRegTime;
    _Bool _hasButtonFstMemo;
    _Bool _hasButtonSedMemo;
    _Bool _realNamed;
    _Bool _idCard;
    NSString *_accountType;
    NSString *_taobaoNick;
    NSString *_certNo;
    NSString *_avatar;
    NSString *_realName;
    NSMutableArray *_logonApps;
    NSMutableArray *_displayTags;
    NSString *_regTime;
    NSString *_buttonFstMemo;
    NSString *_buttonSedMemo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *buttonSedMemo; // @synthesize buttonSedMemo=_buttonSedMemo;
@property(retain, nonatomic) NSString *buttonFstMemo; // @synthesize buttonFstMemo=_buttonFstMemo;
@property(retain, nonatomic) NSString *regTime; // @synthesize regTime=_regTime;
@property(retain, nonatomic) NSMutableArray *displayTags; // @synthesize displayTags=_displayTags;
@property(retain, nonatomic) NSMutableArray *logonApps; // @synthesize logonApps=_logonApps;
@property(retain, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *certNo; // @synthesize certNo=_certNo;
@property(nonatomic) _Bool idCard; // @synthesize idCard=_idCard;
@property(nonatomic) _Bool realNamed; // @synthesize realNamed=_realNamed;
@property(retain, nonatomic) NSString *taobaoNick; // @synthesize taobaoNick=_taobaoNick;
@property(retain, nonatomic) NSString *accountType; // @synthesize accountType=_accountType;
@property(readonly) _Bool hasButtonSedMemo; // @synthesize hasButtonSedMemo=_hasButtonSedMemo;
@property(readonly) _Bool hasButtonFstMemo; // @synthesize hasButtonFstMemo=_hasButtonFstMemo;
@property(readonly) _Bool hasRegTime; // @synthesize hasRegTime=_hasRegTime;
@property(readonly) _Bool hasRealName; // @synthesize hasRealName=_hasRealName;
@property(readonly) _Bool hasAvatar; // @synthesize hasAvatar=_hasAvatar;
@property(readonly) _Bool hasCertNo; // @synthesize hasCertNo=_hasCertNo;
@property(readonly) _Bool hasIdCard; // @synthesize hasIdCard=_hasIdCard;
@property(readonly) _Bool hasRealNamed; // @synthesize hasRealNamed=_hasRealNamed;
@property(readonly) _Bool hasTaobaoNick; // @synthesize hasTaobaoNick=_hasTaobaoNick;
@property(readonly) _Bool hasAccountType; // @synthesize hasAccountType=_hasAccountType;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addDisplayTags:(id)arg1;
- (void)setDisplayTagsArray:(id)arg1;
- (void)addLogonApps:(id)arg1;
- (void)setLogonAppsArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

