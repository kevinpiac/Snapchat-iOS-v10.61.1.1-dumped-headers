//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SCMapboxStyleLoader;

@protocol SCMapboxStyleListener <NSObject>
- (void)mapboxStyleLoader:(SCMapboxStyleLoader *)arg1 hasUpdateForStyle:(int)arg2;

@optional
- (void)mapboxStyleLoader:(SCMapboxStyleLoader *)arg1 didReceiveError:(NSError *)arg2 forStyle:(int)arg3;
@end

