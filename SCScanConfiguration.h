//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCUserSession;

@interface SCScanConfiguration : NSObject
{
    CDUnknownBlockType _scanResultsHandler;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType scanResultsHandler; // @synthesize scanResultsHandler=_scanResultsHandler;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;

@end

