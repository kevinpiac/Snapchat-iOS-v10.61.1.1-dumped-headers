//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCEntryPointCleanupProgressDelegate;

@interface SCEntryPointCleanupProgress : NSObject
{
    id <SCEntryPointCleanupProgressDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1;
- (void)whenFinished:(CDUnknownBlockType)arg1;

@end

