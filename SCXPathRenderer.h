//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCXRenderer-Protocol.h"

@class NSString, SCXDashedPathRenderer, SCXFlightPathRenderer;

@interface SCXPathRenderer : NSObject <SCXRenderer>
{
    SCXDashedPathRenderer *_dashedPathRenderer;
    SCXFlightPathRenderer *_flightPathRenderer;
}

- (void).cxx_destruct;
- (void)complete;
- (id)init;
- (void)prepare;
- (void)render:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
