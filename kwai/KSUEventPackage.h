//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class KSUClickEvent, KSUCustomEvent, KSUExceptionEvent, KSUFixAppEvent, KSULaunchEvent, KSULoginEvent, KSUSearchEvent, KSUShareEvent, KSUShowEvent, KSUTaskEvent;

@interface KSUEventPackage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) KSUClickEvent *clickEvent; // @dynamic clickEvent;
@property(retain, nonatomic) KSUCustomEvent *customEvent; // @dynamic customEvent;
@property(retain, nonatomic) KSUExceptionEvent *exceptionEvent; // @dynamic exceptionEvent;
@property(retain, nonatomic) KSUFixAppEvent *fixAppEvent; // @dynamic fixAppEvent;
@property(nonatomic) _Bool hasClickEvent; // @dynamic hasClickEvent;
@property(nonatomic) _Bool hasCustomEvent; // @dynamic hasCustomEvent;
@property(nonatomic) _Bool hasExceptionEvent; // @dynamic hasExceptionEvent;
@property(nonatomic) _Bool hasFixAppEvent; // @dynamic hasFixAppEvent;
@property(nonatomic) _Bool hasLaunchEvent; // @dynamic hasLaunchEvent;
@property(nonatomic) _Bool hasLoginEvent; // @dynamic hasLoginEvent;
@property(nonatomic) _Bool hasSearchEvent; // @dynamic hasSearchEvent;
@property(nonatomic) _Bool hasShareEvent; // @dynamic hasShareEvent;
@property(nonatomic) _Bool hasShowEvent; // @dynamic hasShowEvent;
@property(nonatomic) _Bool hasTaskEvent; // @dynamic hasTaskEvent;
@property(retain, nonatomic) KSULaunchEvent *launchEvent; // @dynamic launchEvent;
@property(retain, nonatomic) KSULoginEvent *loginEvent; // @dynamic loginEvent;
@property(retain, nonatomic) KSUSearchEvent *searchEvent; // @dynamic searchEvent;
@property(retain, nonatomic) KSUShareEvent *shareEvent; // @dynamic shareEvent;
@property(retain, nonatomic) KSUShowEvent *showEvent; // @dynamic showEvent;
@property(retain, nonatomic) KSUTaskEvent *taskEvent; // @dynamic taskEvent;

@end
