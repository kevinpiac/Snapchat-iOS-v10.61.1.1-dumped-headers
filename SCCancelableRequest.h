//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCancelable-Protocol.h"
#import "SCCanceling-Protocol.h"

@class NSString, SCSentinel;

@interface SCCancelableRequest : NSObject <SCCanceling, SCCancelable>
{
    SCSentinel *_sentinel;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (_Bool)isCancelled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

