//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCServerConfigListener-Protocol.h"
#import "SCStickerURLConfig-Protocol.h"

@class NSString;
@protocol SCStickerURLConfigListener;

@interface SCStickerURLConfig : NSObject <SCServerConfigListener, SCStickerURLConfig>
{
    id <SCStickerURLConfigListener> _listener;
    NSString *_cdnURLString;
}

- (void).cxx_destruct;
- (void)_updateFromServerConfig:(id)arg1;
@property(readonly, copy, nonatomic) NSString *cdnURLString; // @synthesize cdnURLString=_cdnURLString;
- (id)init;
@property(nonatomic) __weak id <SCStickerURLConfigListener> listener; // @synthesize listener=_listener;
- (void)serverConfigDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

