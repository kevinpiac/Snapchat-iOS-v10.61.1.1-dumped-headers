//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSData, NSDictionary, NSString;

@interface SCComposerNetworkingResponse : NSObject <SCComposerJsConvertible, NSCopying>
{
    NSDictionary *_headers;
    NSData *_body;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *body; // @synthesize body=_body;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
- (id)initWithHeaders:(id)arg1 body:(id)arg2;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

