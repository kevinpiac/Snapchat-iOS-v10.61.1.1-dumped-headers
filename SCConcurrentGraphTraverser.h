//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGraphTraverser.h"

@class NSLock, NSMapTable;
@protocol SCConcurrentGraphTraverserDelegate;

@interface SCConcurrentGraphTraverser : SCGraphTraverser
{
    NSLock *_accessLock;
    NSMapTable *_vertexDependencyCount;
    id <SCConcurrentGraphTraverserDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)_isReadyToBeVisited:(id)arg1;
- (void)_traverseConnectedVertices:(id)arg1 visitor:(id)arg2;
@property(nonatomic) __weak id <SCConcurrentGraphTraverserDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)traverseGraph:(id)arg1 visitor:(id)arg2;

@end

