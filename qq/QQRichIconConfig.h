//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>
#import <QQMainProject/NSCopying-Protocol.h>

@interface QQRichIconConfig : NSObject <NSCoding, NSCopying>
{
    _Bool _hasShown;
    _Bool _hasPendantShow;
    _Bool _hasQuickShow;
    long long _iconVersion;
}

@property(nonatomic) _Bool hasQuickShow; // @synthesize hasQuickShow=_hasQuickShow;
@property(nonatomic) _Bool hasPendantShow; // @synthesize hasPendantShow=_hasPendantShow;
@property(nonatomic) _Bool hasShown; // @synthesize hasShown=_hasShown;
@property(nonatomic) long long iconVersion; // @synthesize iconVersion=_iconVersion;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

