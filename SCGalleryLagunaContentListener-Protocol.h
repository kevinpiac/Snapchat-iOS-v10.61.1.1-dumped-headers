//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCSpectaclesContent;

@protocol SCGalleryLagunaContentListener <NSObject>
- (void)didCancelDownloadForContentComponent:(unsigned long long)arg1 forContent:(SCSpectaclesContent *)arg2;
- (void)didFinishDownloadForContentComponent:(unsigned long long)arg1 forContent:(SCSpectaclesContent *)arg2;
- (void)didInterruptDownloadForContentComponent:(unsigned long long)arg1 forContent:(SCSpectaclesContent *)arg2;
- (void)didPauseForContentComponent:(unsigned long long)arg1 forContent:(SCSpectaclesContent *)arg2;
- (void)didReceiveDataForContentComponent:(unsigned long long)arg1 forContent:(SCSpectaclesContent *)arg2;
@end
