//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCacheKeyGenerator-Protocol.h"

@class NSCharacterSet, NSString;

@interface SCDiskCacheKeyGenerator : NSObject <SCCacheKeyGenerator>
{
    unsigned long long _maxKeyLength;
    NSCharacterSet *_characterSetForPercentEncoding;
}

- (void).cxx_destruct;
- (id)_encodedString:(id)arg1;
- (id)initWithMaxLength:(unsigned long long)arg1;
- (id)initWithMaxLength:(unsigned long long)arg1 charactersForPercentEncoding:(id)arg2;
- (id)key:(id)arg1;
- (_Bool)keyNeedsClipping:(id)arg1;
- (id)keySet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

