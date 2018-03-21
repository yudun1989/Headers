//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface RichStateAbstractModel : QQModel
{
    int _actionID;
    _Bool _display;
    NSString *_actionName;
    NSString *_actionDescription;
    NSString *_iconURL;
    NSString *_tinyIconURL;
    int _actionType;
    NSString *_actionParameter;
    int _dataId;
    NSString *_dataName;
    NSString *_nativeNotifyName;
    NSString *_nativeParam;
}

@property(retain, nonatomic) NSString *nativeParam; // @synthesize nativeParam=_nativeParam;
@property(retain, nonatomic) NSString *nativeNotifyName; // @synthesize nativeNotifyName=_nativeNotifyName;
@property(retain, nonatomic) NSString *dataName; // @synthesize dataName=_dataName;
@property(nonatomic) int dataId; // @synthesize dataId=_dataId;
@property(retain, nonatomic) NSString *actionParameter; // @synthesize actionParameter=_actionParameter;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *tinyIconURL; // @synthesize tinyIconURL=_tinyIconURL;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(nonatomic) _Bool display; // @synthesize display=_display;
@property(retain, nonatomic) NSString *actionDescription; // @synthesize actionDescription=_actionDescription;
@property(nonatomic) int actionID; // @synthesize actionID=_actionID;
- (void).cxx_destruct;

@end

