//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/RqdLocalObject.h>

@class NSData, NSString;

@interface RqdExpAttachment : RqdLocalObject
{
    BOOL type;
    NSString *fileName;
    NSData *data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName;
@property(nonatomic) BOOL type; // @synthesize type;
- (void)dealloc;
- (void)createWUPModel:(struct Attachment *)arg1;

@end

