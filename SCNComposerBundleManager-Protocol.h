//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSString;
@protocol SCNComposerBundle, SCNShimsDataProvider;

@protocol SCNComposerBundleManager
- (id <SCNComposerBundle>)loadBundle:(NSString *)arg1;
- (id <SCNShimsDataProvider>)loadBundleContent:(NSString *)arg1;
- (id <SCNShimsDataProvider>)loadDataFromDiskCache:(NSString *)arg1;
- (_Bool)shouldUnloadBundle:(id <SCNComposerBundle>)arg1;
- (void)storeDataInDiskCache:(NSString *)arg1 data:(NSData *)arg2;
@end

