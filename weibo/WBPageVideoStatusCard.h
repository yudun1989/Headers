//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSString, WBStatus;

@interface WBPageVideoStatusCard : WBPageCard
{
    _Bool _hideBottom;
    WBStatus *_status;
    NSString *_shareScheme;
}

+ (_Bool)isValidForDictionary:(id)arg1;
+ (Class)fangleTableCellClass;
+ (Class)tableViewCellClass;
+ (Class)viewClass;
@property(nonatomic) _Bool hideBottom; // @synthesize hideBottom=_hideBottom;
@property(retain, nonatomic) NSString *shareScheme; // @synthesize shareScheme=_shareScheme;
@property(readonly, nonatomic) WBStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)setStatus:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;

@end

