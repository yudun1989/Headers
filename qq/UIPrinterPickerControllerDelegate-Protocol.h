//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class UIPrinter, UIPrinterPickerController, UIViewController;

@protocol UIPrinterPickerControllerDelegate <NSObject>

@optional
- (void)printerPickerControllerDidSelectPrinter:(UIPrinterPickerController *)arg1;
- (void)printerPickerControllerDidDismiss:(UIPrinterPickerController *)arg1;
- (void)printerPickerControllerWillDismiss:(UIPrinterPickerController *)arg1;
- (void)printerPickerControllerDidPresent:(UIPrinterPickerController *)arg1;
- (void)printerPickerControllerWillPresent:(UIPrinterPickerController *)arg1;
- (_Bool)printerPickerController:(UIPrinterPickerController *)arg1 shouldShowPrinter:(UIPrinter *)arg2;
- (UIViewController *)printerPickerControllerParentViewController:(UIPrinterPickerController *)arg1;
@end

