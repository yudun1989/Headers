//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

#import <QQMainProject/NSCopying-Protocol.h>

@class NSData, NSString;

@interface QQAccountsModel : QQModel <NSCopying>
{
    NSString *_uin;
    NSString *_nick;
    NSString *_loginAccount;
    NSString *_icon;
    int _pwd;
    NSString *_sig;
    int _sex;
    int _birs;
    int _country;
    int _prov;
    int _city;
    int _profileSex;
    double loginTime;
    double getMsgTime;
    _Bool login;
    long long onlineStatus;
    _Bool _bSavePwd;
    _Bool _bAutoLogin;
    _Bool _bRecvGroupMsg;
    int head;
    _Bool _bKeepPcOnline;
    _Bool _bKeepBackGroundOnLine;
    NSData *_cookie;
    NSData *_syncCookie;
    _Bool _hasUsedDataLine;
    NSString *_sCountry;
    NSString *_sProvince;
    NSString *_sCity;
    _Bool _shownViewOnlineFriendTips;
    _Bool _isVip;
    _Bool _isSuperVip;
    NSString *_chatAvatarID;
    unsigned int _themeId;
    NSString *_themeVersion;
    _Bool _bThemeAuth;
    _Bool _bUseTabSound;
    int _level;
    int _lastUpdateLevelTime;
    int _isShowXMan;
    int _loginDay;
    int _phoneQQXManDay;
    int _lastUpdateQQXManTime;
    _Bool _bXManIconClick;
    _Bool _bOpenLoginDays;
    _Bool _bindAccountTipsShow;
    int _vipLevel;
    int _svipLevel;
    int _vipTimeType;
    int _diyBubbleTextID;
    NSString *_dateNick;
    unsigned int _lastThemeId;
    long long _avatarPendantID;
    unsigned int _pendantDiyInfoId;
    unsigned int _vipFontID;
    unsigned int _colorRingID;
    unsigned int _comeRingID;
    NSString *_vipCenterUrl;
    _Bool _magicFontOpenFlag;
    int _customVoteId;
    unsigned int _gameAppId;
    unsigned int _gameLastLoginTime;
    unsigned int _colorfulFloatingScreenId;
    int _xo;
    unsigned int _lastThemeSuitId;
    unsigned int _themeSuitId;
    int _iXManScene1DelayTime;
    int _iXManScene2DelayTime;
    unsigned int _gameIconShowFlag;
    unsigned int _gameRank;
    unsigned int _avatarId;
    unsigned int _biuemojiFlag;
    NSString *_voiceBubbleId;
    unsigned long long _avatarIdUpdateTime;
    unsigned long long _diyFontCfgUpdateTime;
}

@property(nonatomic) unsigned long long diyFontCfgUpdateTime; // @synthesize diyFontCfgUpdateTime=_diyFontCfgUpdateTime;
@property(nonatomic) unsigned int biuemojiFlag; // @synthesize biuemojiFlag=_biuemojiFlag;
@property(nonatomic) unsigned long long avatarIdUpdateTime; // @synthesize avatarIdUpdateTime=_avatarIdUpdateTime;
@property(nonatomic) unsigned int avatarId; // @synthesize avatarId=_avatarId;
@property(nonatomic) unsigned int colorfulFloatingScreenId; // @synthesize colorfulFloatingScreenId=_colorfulFloatingScreenId;
@property(retain, nonatomic) NSString *voiceBubbleId; // @synthesize voiceBubbleId=_voiceBubbleId;
@property(nonatomic) unsigned int gameRank; // @synthesize gameRank=_gameRank;
@property(nonatomic) unsigned int gameIconShowFlag; // @synthesize gameIconShowFlag=_gameIconShowFlag;
@property(nonatomic) unsigned int gameLastLoginTime; // @synthesize gameLastLoginTime=_gameLastLoginTime;
@property(nonatomic) unsigned int gameAppId; // @synthesize gameAppId=_gameAppId;
@property(nonatomic) int customVoteId; // @synthesize customVoteId=_customVoteId;
@property(nonatomic) _Bool magicFontOpenFlag; // @synthesize magicFontOpenFlag=_magicFontOpenFlag;
@property(nonatomic) int diyBubbleTextID; // @synthesize diyBubbleTextID=_diyBubbleTextID;
@property(nonatomic) _Bool bindAccountTipsShow; // @synthesize bindAccountTipsShow=_bindAccountTipsShow;
@property(retain, nonatomic) NSString *vipCenterUrl; // @synthesize vipCenterUrl=_vipCenterUrl;
@property(nonatomic) unsigned int comeRingID; // @synthesize comeRingID=_comeRingID;
@property(nonatomic) unsigned int colorRingID; // @synthesize colorRingID=_colorRingID;
@property(nonatomic) unsigned int vipFontID; // @synthesize vipFontID=_vipFontID;
@property(nonatomic) unsigned int pendantDiyInfoId; // @synthesize pendantDiyInfoId=_pendantDiyInfoId;
@property(nonatomic) long long avatarPendantID; // @synthesize avatarPendantID=_avatarPendantID;
@property(nonatomic) int iXManScene2DelayTime; // @synthesize iXManScene2DelayTime=_iXManScene2DelayTime;
@property(nonatomic) int iXManScene1DelayTime; // @synthesize iXManScene1DelayTime=_iXManScene1DelayTime;
@property(nonatomic) int lastUpdateQQXManTime; // @synthesize lastUpdateQQXManTime=_lastUpdateQQXManTime;
@property(nonatomic) int phoneQQXManDay; // @synthesize phoneQQXManDay=_phoneQQXManDay;
@property(nonatomic) int loginDay; // @synthesize loginDay=_loginDay;
@property(nonatomic) int isShowXMan; // @synthesize isShowXMan=_isShowXMan;
@property(nonatomic) int lastUpdateLevelTime; // @synthesize lastUpdateLevelTime=_lastUpdateLevelTime;
@property(nonatomic) int level; // @synthesize level=_level;
@property(nonatomic) _Bool bUseTabSound; // @synthesize bUseTabSound=_bUseTabSound;
@property(nonatomic) _Bool bThemeAuth; // @synthesize bThemeAuth=_bThemeAuth;
@property(retain, nonatomic) NSString *themeVersion; // @synthesize themeVersion=_themeVersion;
@property(nonatomic) unsigned int themeSuitId; // @synthesize themeSuitId=_themeSuitId;
@property(nonatomic) unsigned int lastThemeSuitId; // @synthesize lastThemeSuitId=_lastThemeSuitId;
@property(nonatomic) unsigned int themeId; // @synthesize themeId=_themeId;
@property(nonatomic) unsigned int lastThemeId; // @synthesize lastThemeId=_lastThemeId;
@property(retain, nonatomic) NSString *chatAvatarID; // @synthesize chatAvatarID=_chatAvatarID;
@property(nonatomic) _Bool shownViewOnlineFriendTips; // @synthesize shownViewOnlineFriendTips=_shownViewOnlineFriendTips;
@property(nonatomic) _Bool hasUsedDataLine; // @synthesize hasUsedDataLine=_hasUsedDataLine;
@property(retain, nonatomic) NSData *syncCookie; // @synthesize syncCookie=_syncCookie;
@property(retain, nonatomic) NSData *cookie; // @synthesize cookie=_cookie;
@property(retain, nonatomic) NSString *loginAccount; // @synthesize loginAccount=_loginAccount;
@property(nonatomic) _Bool bKeepBackGroundOnLine; // @synthesize bKeepBackGroundOnLine=_bKeepBackGroundOnLine;
@property(nonatomic) _Bool bKeepPcOnline; // @synthesize bKeepPcOnline=_bKeepPcOnline;
@property(nonatomic) _Bool bRecvGroupMsg; // @synthesize bRecvGroupMsg=_bRecvGroupMsg;
@property(nonatomic) _Bool bAutoLogin; // @synthesize bAutoLogin=_bAutoLogin;
@property(nonatomic) _Bool bSavePwd; // @synthesize bSavePwd=_bSavePwd;
@property(nonatomic) int city; // @synthesize city=_city;
@property(nonatomic) int prov; // @synthesize prov=_prov;
@property(nonatomic) int country; // @synthesize country=_country;
@property(nonatomic) int birs; // @synthesize birs=_birs;
@property(nonatomic) int profileSex; // @synthesize profileSex=_profileSex;
@property(nonatomic) int sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSString *sig; // @synthesize sig=_sig;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *dateNick; // @synthesize dateNick=_dateNick;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(nonatomic) int pwd; // @synthesize pwd=_pwd;
@property(retain, nonatomic) NSString *sCity; // @synthesize sCity=_sCity;
@property(retain, nonatomic) NSString *sProvince; // @synthesize sProvince=_sProvince;
@property(retain, nonatomic) NSString *sCountry; // @synthesize sCountry=_sCountry;
@property(nonatomic) _Bool bOpenLoginDays; // @synthesize bOpenLoginDays=_bOpenLoginDays;
@property(nonatomic) _Bool bXManIconClick; // @synthesize bXManIconClick=_bXManIconClick;
@property(nonatomic) int vipTimeType; // @synthesize vipTimeType=_vipTimeType;
@property(nonatomic) int svipLevel; // @synthesize svipLevel=_svipLevel;
@property(nonatomic) int vipLevel; // @synthesize vipLevel=_vipLevel;
@property(nonatomic) _Bool isSuperVip; // @synthesize isSuperVip=_isSuperVip;
@property(nonatomic) _Bool isVip; // @synthesize isVip=_isVip;
@property(nonatomic) long long onlineStatus; // @synthesize onlineStatus;
@property(nonatomic) int head; // @synthesize head;
@property(nonatomic) _Bool login; // @synthesize login;
@property(nonatomic) double getMsgTime; // @synthesize getMsgTime;
@property(nonatomic) double loginTime; // @synthesize loginTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)getNickForQzone;
@property(retain, nonatomic) NSString *nick;
- (_Bool)isEqualToModel:(id)arg1;
- (void)setSuperVip:(_Bool)arg1;
- (void)setVip:(_Bool)arg1;
- (void)notifyDrawerOfDataChanged;
- (id)initWithModel:(id)arg1;
- (id)init;

@end

