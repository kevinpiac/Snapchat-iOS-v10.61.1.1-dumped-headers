//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGraphVertex.h"

@class NSArray, NSMutableArray;

@interface SCMutableGraphVertex : SCGraphVertex
{
    long long _mutableIncomingConnections;
    NSMutableArray *_mutableVertices;
    NSArray *_verticesCache;
    CDUnknownBlockType _link;
}

- (void).cxx_destruct;
- (id)_link:(id)arg1;
- (long long)incomingConnections;
- (id)initWithItem:(id)arg1;
@property(readonly, nonatomic) CDUnknownBlockType link; // @synthesize link=_link;
- (id)vertices;

@end

