//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCWebServerResponse.h"

@class NSString, SCQueuePerformer;

@interface SCWebServerStreamedResponse : SCWebServerResponse
{
    CDUnknownBlockType _block;
    CDUnknownBlockType _connectionClosedBlock;
    SCQueuePerformer *_serialPerformer;
    _Bool _didFinishSendingData;
}

+ (id)responseWithContentType:(id)arg1 asyncStreamBlock:(CDUnknownBlockType)arg2;
+ (id)responseWithContentType:(id)arg1 streamBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)asyncReadDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)close;
- (id)description;
- (id)initWithContentType:(id)arg1 asyncStreamBlock:(CDUnknownBlockType)arg2 connectionClosedBlock:(CDUnknownBlockType)arg3;
- (id)initWithContentType:(id)arg1 streamBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *contentType; // @dynamic contentType;

@end

