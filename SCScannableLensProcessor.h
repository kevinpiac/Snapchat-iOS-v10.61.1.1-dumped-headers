//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCScannableActionAPIProtocol;

@interface SCScannableLensProcessor : NSObject
{
    id <SCScannableActionAPIProtocol> _scannablesAPI;
}

+ (id)machineReadableCodeFromScanCodeId:(id)arg1 codeTypeMeta:(id)arg2;
- (void).cxx_destruct;
- (id)initWithScannablesAPI:(id)arg1;
- (void)scannableLensFromMachineReadableCodeResult:(id)arg1 lensDefaultExpiration:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
