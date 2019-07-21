//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStreamingResourceURLProvider-Protocol.h"

@class NSString, NSURL;
@protocol SCNContentManagerContentResult;

@interface SCStreamingResourceContentInfo : NSObject <SCStreamingResourceURLProvider>
{
    NSURL *_url;
    NSString *_resourceId;
    id <SCNContentManagerContentResult> _contentResult;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCNContentManagerContentResult> contentResult; // @synthesize contentResult=_contentResult;
@property(readonly, copy) NSString *description;
- (id)initWithUrl:(id)arg1 resourceId:(id)arg2 contentResult:(id)arg3;
@property(readonly, copy, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
